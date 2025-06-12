
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_keystore_list_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_keystore_list_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponseBody_result_permission.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListKeystoreSearchResponseBody_result_keystore_list
    : public ModelBase
{
public:
    ListKeystoreSearchResponseBody_result_keystore_list();
    virtual ~ListKeystoreSearchResponseBody_result_keystore_list();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKeystoreSearchResponseBody_result_keystore_list members

    /// <summary>
    /// 文件ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListKeystoreSearchResponseBody_result_permission getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const ListKeystoreSearchResponseBody_result_permission& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    std::string getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(const std::string& value);

    /// <summary>
    /// 修改时间戳
    /// </summary>

    std::string getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 文件名
    /// </summary>

    std::string getKeystoreName() const;
    bool keystoreNameIsSet() const;
    void unsetkeystoreName();
    void setKeystoreName(const std::string& value);

    /// <summary>
    /// 文件创建者用户ID
    /// </summary>

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// 文件创建者用户名
    /// </summary>

    std::string getCreateUserName() const;
    bool createUserNameIsSet() const;
    void unsetcreateUserName();
    void setCreateUserName(const std::string& value);

    /// <summary>
    /// 文件修改者用户ID
    /// </summary>

    std::string getUpdateUserId() const;
    bool updateUserIdIsSet() const;
    void unsetupdateUserId();
    void setUpdateUserId(const std::string& value);

    /// <summary>
    /// 文件修改者用户名
    /// </summary>

    std::string getUpdateUserName() const;
    bool updateUserNameIsSet() const;
    void unsetupdateUserName();
    void setUpdateUserName(const std::string& value);

    /// <summary>
    /// 是否共享，开启后允许租户内所有成员在编译构建中使用该文件
    /// </summary>

    double getShare() const;
    bool shareIsSet() const;
    void unsetshare();
    void setShare(double value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    ListKeystoreSearchResponseBody_result_permission permission_;
    bool permissionIsSet_;
    std::string createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string keystoreName_;
    bool keystoreNameIsSet_;
    std::string createUserId_;
    bool createUserIdIsSet_;
    std::string createUserName_;
    bool createUserNameIsSet_;
    std::string updateUserId_;
    bool updateUserIdIsSet_;
    std::string updateUserName_;
    bool updateUserNameIsSet_;
    double share_;
    bool shareIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListKeystoreSearchResponseBody_result_keystore_list_H_
