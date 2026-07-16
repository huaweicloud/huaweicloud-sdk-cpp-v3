
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumeAgencyForPodIdentityResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumeAgencyForPodIdentityResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PodIdentitySubject.h>
#include <huaweicloud/cce/v3/model/Credentials.h>
#include <string>
#include <huaweicloud/cce/v3/model/AssumedAgency.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AssumeAgencyForPodIdentityResponse
    : public ModelBase, public HttpResponse
{
public:
    AssumeAgencyForPodIdentityResponse();
    virtual ~AssumeAgencyForPodIdentityResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssumeAgencyForPodIdentityResponse members

    /// <summary>
    /// 
    /// </summary>

    AssumedAgency getAssumedAgency() const;
    bool assumedAgencyIsSet() const;
    void unsetassumedAgency();
    void setAssumedAgency(const AssumedAgency& value);

    /// <summary>
    /// **参数解释：** 凭据签发时传入的audience属性，通过pod-identity关联获取委托凭据的场景下，该值固定为 service.cce.pods。 该属性只在pod-identity关联绑定信任委托时返回 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAudience() const;
    bool audienceIsSet() const;
    void unsetaudience();
    void setAudience(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Credentials getCredentials() const;
    bool credentialsIsSet() const;
    void unsetcredentials();
    void setCredentials(const Credentials& value);

    /// <summary>
    /// **参数解释：** 委托凭据所属的pod-identity关联id。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPodIdentityAssociationId() const;
    bool podIdentityAssociationIdIsSet() const;
    void unsetpodIdentityAssociationId();
    void setPodIdentityAssociationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PodIdentitySubject getSubject() const;
    bool subjectIsSet() const;
    void unsetsubject();
    void setSubject(const PodIdentitySubject& value);


protected:
    AssumedAgency assumedAgency_;
    bool assumedAgencyIsSet_;
    std::string audience_;
    bool audienceIsSet_;
    Credentials credentials_;
    bool credentialsIsSet_;
    std::string podIdentityAssociationId_;
    bool podIdentityAssociationIdIsSet_;
    PodIdentitySubject subject_;
    bool subjectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AssumeAgencyForPodIdentityResponse_H_
