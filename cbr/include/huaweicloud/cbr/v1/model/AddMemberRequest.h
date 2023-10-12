
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AddMemberRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AddMemberRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/AddMembersReq.h>
#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  AddMemberRequest
    : public ModelBase
{
public:
    AddMemberRequest();
    virtual ~AddMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddMemberRequest members

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

    AddMembersReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddMembersReq& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    AddMembersReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddMemberRequest& dereference_from_shared_ptr(std::shared_ptr<AddMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AddMemberRequest_H_
