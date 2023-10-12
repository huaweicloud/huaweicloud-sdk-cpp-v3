
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowIncrementComponentsDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowIncrementComponentsDetailResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/IncreComponentDetail.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowIncrementComponentsDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIncrementComponentsDetailResponse();
    virtual ~ShowIncrementComponentsDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIncrementComponentsDetailResponse members

    /// <summary>
    /// 更新时间。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 增量组件详情。
    /// </summary>

    std::vector<IncreComponentDetail>& getIncrementComponentsList();
    bool incrementComponentsListIsSet() const;
    void unsetincrementComponentsList();
    void setIncrementComponentsList(const std::vector<IncreComponentDetail>& value);


protected:
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::vector<IncreComponentDetail> incrementComponentsList_;
    bool incrementComponentsListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowIncrementComponentsDetailResponse_H_
