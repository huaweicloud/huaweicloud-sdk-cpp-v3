
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Author_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Author_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  Author
    : public ModelBase
{
public:
    Author();
    virtual ~Author();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Author members

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

    /// <summary>
    /// 用户别名
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// 头像url
    /// </summary>

    std::string getAvatarUrl() const;
    bool avatarUrlIsSet() const;
    void unsetavatarUrl();
    void setAvatarUrl(const std::string& value);

    /// <summary>
    /// 邮箱
    /// </summary>

    std::string getEmail() const;
    bool emailIsSet() const;
    void unsetemail();
    void setEmail(const std::string& value);


protected:
    double id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string avatarUrl_;
    bool avatarUrlIsSet_;
    std::string email_;
    bool emailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_Author_H_
