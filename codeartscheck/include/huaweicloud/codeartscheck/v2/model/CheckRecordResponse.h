
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartscheck/v2/model/CheckRecordDataInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CheckRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckRecordResponse();
    virtual ~CheckRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckRecordResponse members

    /// <summary>
    /// 历史记录数据
    /// </summary>

    std::vector<CheckRecordDataInfo>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<CheckRecordDataInfo>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<CheckRecordDataInfo> data_;
    bool dataIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CheckRecordResponse_H_
