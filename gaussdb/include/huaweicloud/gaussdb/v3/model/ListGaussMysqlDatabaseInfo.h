
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMysqlDatabaseInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMysqlDatabaseInfo_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/GaussMySqlDatabaseInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListGaussMysqlDatabaseInfo
    : public ModelBase
{
public:
    ListGaussMysqlDatabaseInfo();
    virtual ~ListGaussMysqlDatabaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListGaussMysqlDatabaseInfo members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库使用的字符集，如utf8mb4、gbk等。
    /// </summary>

    std::string getCharset() const;
    bool charsetIsSet() const;
    void unsetcharset();
    void setCharset(const std::string& value);

    /// <summary>
    /// 数据库备注。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 已授权数据库用户列表。
    /// </summary>

    std::vector<GaussMySqlDatabaseInfo>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<GaussMySqlDatabaseInfo>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string charset_;
    bool charsetIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::vector<GaussMySqlDatabaseInfo> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListGaussMysqlDatabaseInfo_H_
