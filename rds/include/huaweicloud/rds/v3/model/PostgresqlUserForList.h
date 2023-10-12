
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlUserForList_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlUserForList_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库用户信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlUserForList
    : public ModelBase
{
public:
    PostgresqlUserForList();
    virtual ~PostgresqlUserForList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgresqlUserForList members

    /// <summary>
    /// 帐号名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户的权限属性。
    /// </summary>

    Object getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const Object& value);

    /// <summary>
    /// 用户的默认权限。
    /// </summary>

    std::vector<std::string>& getMemberof();
    bool memberofIsSet() const;
    void unsetmemberof();
    void setMemberof(const std::vector<std::string>& value);

    /// <summary>
    /// 数据库用户备注。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object attributes_;
    bool attributesIsSet_;
    std::vector<std::string> memberof_;
    bool memberofIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlUserForList_H_
