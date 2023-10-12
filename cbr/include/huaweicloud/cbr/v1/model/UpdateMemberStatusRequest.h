
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateMemberStatusRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateMemberStatusRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/UpdateMember.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateMemberStatusRequest
    : public ModelBase
{
public:
    UpdateMemberStatusRequest();
    virtual ~UpdateMemberStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateMemberStatusRequest members

    /// <summary>
    /// 成员id，成员id与项目id为同一个。
    /// </summary>

    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);

    /// <summary>
    /// 备份副本id
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateMember getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateMember& value);


protected:
    std::string memberId_;
    bool memberIdIsSet_;
    std::string backupId_;
    bool backupIdIsSet_;
    UpdateMember body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateMemberStatusRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateMemberStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateMemberStatusRequest_H_
