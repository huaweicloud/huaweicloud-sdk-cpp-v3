
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateReportProfileRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateReportProfileRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/UpdateReportProfileDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateReportProfileRequest
    : public ModelBase
{
public:
    UpdateReportProfileRequest();
    virtual ~UpdateReportProfileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateReportProfileRequest members

    /// <summary>
    /// **参数解释**： 防火墙ID，用户创建防火墙实例后产生的唯一ID，配置后可区分不同防火墙，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 安全报告模板ID，可以通过调用[查询安全报告模板列表接口]获得，通过返回值中的data.records.profile_id获得 **约束限制**： 不涉及 **取值范围**： 32位UUID **默认取值**： 不涉及
    /// </summary>

    std::string getReportProfileId() const;
    bool reportProfileIdIsSet() const;
    void unsetreportProfileId();
    void setReportProfileId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateReportProfileDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateReportProfileDto& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string reportProfileId_;
    bool reportProfileIdIsSet_;
    UpdateReportProfileDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateReportProfileRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateReportProfileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateReportProfileRequest_H_
