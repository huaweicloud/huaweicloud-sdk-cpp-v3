
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateHttpsPasswordSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateHttpsPasswordSettingRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/UpdateHttpsPasswordSetting.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  UpdateHttpsPasswordSettingRequest
    : public ModelBase
{
public:
    UpdateHttpsPasswordSettingRequest();
    virtual ~UpdateHttpsPasswordSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHttpsPasswordSettingRequest members

    /// <summary>
    /// 
    /// </summary>

    UpdateHttpsPasswordSetting getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateHttpsPasswordSetting& value);


protected:
    UpdateHttpsPasswordSetting body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateHttpsPasswordSettingRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateHttpsPasswordSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_UpdateHttpsPasswordSettingRequest_H_
