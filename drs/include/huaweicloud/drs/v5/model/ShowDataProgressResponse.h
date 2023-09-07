
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataProgressResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataProgressResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DataProcessInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowDataProgressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDataProgressResponse();
    virtual ~ShowDataProgressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDataProgressResponse members

    /// <summary>
    /// 数据加工规则响应体
    /// </summary>

    std::vector<DataProcessInfo>& getDataProcessInfo();
    bool dataProcessInfoIsSet() const;
    void unsetdataProcessInfo();
    void setDataProcessInfo(const std::vector<DataProcessInfo>& value);

    /// <summary>
    /// 数据加工规则总数目
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<DataProcessInfo> dataProcessInfo_;
    bool dataProcessInfoIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataProgressResponse_H_
