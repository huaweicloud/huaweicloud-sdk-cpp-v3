
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ApprovalMergeRequestApproversItem_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ApprovalMergeRequestApproversItem_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ApprovalMergeRequestApproversItem
    : public ModelBase
{
public:
    ApprovalMergeRequestApproversItem();
    virtual ~ApprovalMergeRequestApproversItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApprovalMergeRequestApproversItem members

    /// <summary>
    /// 用户id
    /// </summary>

    double getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(double value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 用户状态
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 用户iamId
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);


protected:
    double id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string username_;
    bool usernameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ApprovalMergeRequestApproversItem_H_
