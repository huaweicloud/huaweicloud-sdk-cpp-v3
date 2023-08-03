
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlDatabaseForCreation_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlDatabaseForCreation_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlDatabaseForCreation
    : public ModelBase
{
public:
    PostgresqlDatabaseForCreation();
    virtual ~PostgresqlDatabaseForCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostgresqlDatabaseForCreation members

    /// <summary>
    /// 数据库名称。  数据库名称长度可在1～63个字符之间，由字母、数字、或下划线组成，不能包含其他特殊字符，不能以“pg”和数字开头，且不能和RDS for PostgreSQL模板库重名。  RDS for PostgreSQL模板库包括postgres， template0 ，template1。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库字符集。默认UTF8。
    /// </summary>

    std::string getCharacterSet() const;
    bool characterSetIsSet() const;
    void unsetcharacterSet();
    void setCharacterSet(const std::string& value);

    /// <summary>
    /// 数据库所属用户，缺省时默认是root，不能和系统用户重名，且必须是已存在的用户。  系统用户包括“rdsAdmin”,“ rdsMetric”, “rdsBackup”, “rdsRepl”,“ rdsProxy”, “rdsDdm”。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 数据库模板名称，可选值template0，template1。默认template1。
    /// </summary>

    std::string getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const std::string& value);

    /// <summary>
    /// 数据库排序集。默认en_US.UTF-8。  - 须知： 不同的排序规则下，相同字符串的比较其结果可能是不同的。 例如，在en_US.utf8下， select &#39;a&#39;&gt;&#39;A&#39;;执行结果为false，但在&#39;C&#39;下，select &#39;a&#39;&gt;&#39;A&#39;;结果为true。如果数据库从“O”迁移到PostgreSQL，数据库排序集需使用&#39;C&#39;才能得到一致的预期。支持的排序规则可以查询系统表 pg_collation。
    /// </summary>

    std::string getLcCollate() const;
    bool lcCollateIsSet() const;
    void unsetlcCollate();
    void setLcCollate(const std::string& value);

    /// <summary>
    /// 数据库分类集。默认en_US.UTF-8。
    /// </summary>

    std::string getLcCtype() const;
    bool lcCtypeIsSet() const;
    void unsetlcCtype();
    void setLcCtype(const std::string& value);

    /// <summary>
    /// 是否回收public schema的PUBLIC CREATE权限。 true，表示回收该权限。 false，表示不回收该权限。 缺省时默认是false。
    /// </summary>

    bool isIsRevokePublicPrivilege() const;
    bool isRevokePublicPrivilegeIsSet() const;
    void unsetisRevokePublicPrivilege();
    void setIsRevokePublicPrivilege(bool value);

    /// <summary>
    /// 数据库备注。 取值范围：长度1~512个字符。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string characterSet_;
    bool characterSetIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string template_;
    bool templateIsSet_;
    std::string lcCollate_;
    bool lcCollateIsSet_;
    std::string lcCtype_;
    bool lcCtypeIsSet_;
    bool isRevokePublicPrivilege_;
    bool isRevokePublicPrivilegeIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlDatabaseForCreation_H_
