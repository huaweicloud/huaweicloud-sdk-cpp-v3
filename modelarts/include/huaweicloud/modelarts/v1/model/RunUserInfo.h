
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunUserInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunUserInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 启动用户、启动用户组设置
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RunUserInfo
    : public ModelBase
{
public:
    RunUserInfo();
    virtual ~RunUserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunUserInfo members

    /// <summary>
    /// 容器启动用户的user id
    /// </summary>

    int32_t getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(int32_t value);

    /// <summary>
    /// 容器启动用户的group id
    /// </summary>

    int32_t getGid() const;
    bool gidIsSet() const;
    void unsetgid();
    void setGid(int32_t value);

    /// <summary>
    /// 容器启动用户的user name
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 容器启动用户的group name
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);


protected:
    int32_t uid_;
    bool uidIsSet_;
    int32_t gid_;
    bool gidIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RunUserInfo_H_
