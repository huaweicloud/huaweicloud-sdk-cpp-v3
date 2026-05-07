
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowDomainStreamBackupRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowDomainStreamBackupRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ShowDomainStreamBackupRequest
    : public ModelBase
{
public:
    ShowDomainStreamBackupRequest();
    virtual ~ShowDomainStreamBackupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainStreamBackupRequest members

    /// <summary>
    /// **参数解释**： 直播推流域名 **约束限制**： 不涉及 **取值范围**： 字符长度为[1-255]位 **默认取值**： 不涉及 
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);


protected:
    std::string publishDomain_;
    bool publishDomainIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainStreamBackupRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainStreamBackupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ShowDomainStreamBackupRequest_H_
