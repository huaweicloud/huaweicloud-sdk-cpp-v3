
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlDatabase_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlDatabase_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/GaussMySqlDatabaseUser.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息列表，列表最大长度为50。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateGaussMySqlDatabase
    : public ModelBase
{
public:
    CreateGaussMySqlDatabase();
    virtual ~CreateGaussMySqlDatabase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGaussMySqlDatabase members

    /// <summary>
    /// 数据库名称,数据库名称长度可在1～64个字符之间，由字母、数字、下划线、中划线组成，中划线的累计总长度小于等于10个字符，且不能包含其他特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库备注,长度不能超过512个字符，不能包含回车和特殊字符!&lt;\&quot;&#x3D;&#39;&gt;&amp;。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 数据库使用的字符集名称，如utf8mb4、gbk。
    /// </summary>

    std::string getCharacterSet() const;
    bool characterSetIsSet() const;
    void unsetcharacterSet();
    void setCharacterSet(const std::string& value);

    /// <summary>
    /// 数据库用户列表，即创建数据库时同步授权给列表中的用户，列表最大长度为50。列表可以为空，即创建数据库时不授予其权限到数据库用户，在需要给该数据库授权某数据库用户时，调用数据库用户授权接口即可。
    /// </summary>

    std::vector<GaussMySqlDatabaseUser>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<GaussMySqlDatabaseUser>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string characterSet_;
    bool characterSetIsSet_;
    std::vector<GaussMySqlDatabaseUser> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateGaussMySqlDatabase_H_
