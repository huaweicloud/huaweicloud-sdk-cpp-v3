
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PublicAwLibRes_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PublicAwLibRes_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PublicAwLibRes
    : public ModelBase
{
public:
    PublicAwLibRes();
    virtual ~PublicAwLibRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicAwLibRes members

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 创建时间字符串
    /// </summary>

    std::string getCreateTimeString() const;
    bool createTimeStringIsSet() const;
    void unsetcreateTimeString();
    void setCreateTimeString(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 关联公共aw时的编辑链接
    /// </summary>

    std::string getDocumentLink() const;
    bool documentLinkIsSet() const;
    void unsetdocumentLink();
    void setDocumentLink(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 蓝区:Blue,绿区:Green,黄区:Yellow
    /// </summary>

    std::vector<std::string>& getNetArea();
    bool netAreaIsSet() const;
    void unsetnetArea();
    void setNetArea(const std::vector<std::string>& value);

    /// <summary>
    /// obs临时url
    /// </summary>

    std::string getObsTempUrl() const;
    bool obsTempUrlIsSet() const;
    void unsetobsTempUrl();
    void setObsTempUrl(const std::string& value);

    /// <summary>
    /// 产品线
    /// </summary>

    std::string getProductLine() const;
    bool productLineIsSet() const;
    void unsetproductLine();
    void setProductLine(const std::string& value);

    /// <summary>
    /// 仓库分支
    /// </summary>

    std::string getRepoBranch() const;
    bool repoBranchIsSet() const;
    void unsetrepoBranch();
    void setRepoBranch(const std::string& value);

    /// <summary>
    /// 存公共aw依赖jar包的目录
    /// </summary>

    std::string getRepoLibPath() const;
    bool repoLibPathIsSet() const;
    void unsetrepoLibPath();
    void setRepoLibPath(const std::string& value);

    /// <summary>
    /// 仓库密码
    /// </summary>

    std::string getRepoPassword() const;
    bool repoPasswordIsSet() const;
    void unsetrepoPassword();
    void setRepoPassword(const std::string& value);

    /// <summary>
    /// 仓库秘钥
    /// </summary>

    std::string getRepoPrivateKey() const;
    bool repoPrivateKeyIsSet() const;
    void unsetrepoPrivateKey();
    void setRepoPrivateKey(const std::string& value);

    /// <summary>
    /// 仓库地址
    /// </summary>

    std::string getRepoUrl() const;
    bool repoUrlIsSet() const;
    void unsetrepoUrl();
    void setRepoUrl(const std::string& value);

    /// <summary>
    /// 仓库用户名
    /// </summary>

    std::string getRepoUsername() const;
    bool repoUsernameIsSet() const;
    void unsetrepoUsername();
    void setRepoUsername(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新时间戳
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);

    /// <summary>
    /// 更新时间字符串
    /// </summary>

    std::string getUpdateTimeString() const;
    bool updateTimeStringIsSet() const;
    void unsetupdateTimeString();
    void setUpdateTimeString(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);


protected:
    std::string createTime_;
    bool createTimeIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string createTimeString_;
    bool createTimeStringIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string documentLink_;
    bool documentLinkIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> netArea_;
    bool netAreaIsSet_;
    std::string obsTempUrl_;
    bool obsTempUrlIsSet_;
    std::string productLine_;
    bool productLineIsSet_;
    std::string repoBranch_;
    bool repoBranchIsSet_;
    std::string repoLibPath_;
    bool repoLibPathIsSet_;
    std::string repoPassword_;
    bool repoPasswordIsSet_;
    std::string repoPrivateKey_;
    bool repoPrivateKeyIsSet_;
    std::string repoUrl_;
    bool repoUrlIsSet_;
    std::string repoUsername_;
    bool repoUsernameIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string updateTimeString_;
    bool updateTimeStringIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PublicAwLibRes_H_
