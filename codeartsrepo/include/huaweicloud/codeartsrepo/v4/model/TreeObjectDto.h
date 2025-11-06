
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TreeObjectDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TreeObjectDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  TreeObjectDto
    : public ModelBase
{
public:
    TreeObjectDto();
    virtual ~TreeObjectDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TreeObjectDto members

    /// <summary>
    /// 文件唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 文件名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 对象类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 模式结构
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 子模块链接
    /// </summary>

    std::string getSubmoduleLink() const;
    bool submoduleLinkIsSet() const;
    void unsetsubmoduleLink();
    void setSubmoduleLink(const std::string& value);

    /// <summary>
    /// 子模块分支
    /// </summary>

    std::string getSubmoduleBranch() const;
    bool submoduleBranchIsSet() const;
    void unsetsubmoduleBranch();
    void setSubmoduleBranch(const std::string& value);

    /// <summary>
    /// md5值
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string submoduleLink_;
    bool submoduleLinkIsSet_;
    std::string submoduleBranch_;
    bool submoduleBranchIsSet_;
    std::string md5_;
    bool md5IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TreeObjectDto_H_
