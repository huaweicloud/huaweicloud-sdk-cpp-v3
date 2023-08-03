
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlListDatabase_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlListDatabase_H_

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
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlListDatabase
    : public ModelBase
{
public:
    PostgresqlListDatabase();
    virtual ~PostgresqlListDatabase();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostgresqlListDatabase members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库所属用户。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 数据库使用的字符集，例如UTF8。
    /// </summary>

    std::string getCharacterSet() const;
    bool characterSetIsSet() const;
    void unsetcharacterSet();
    void setCharacterSet(const std::string& value);

    /// <summary>
    /// 数据库排序集，例如en_US.UTF-8等。
    /// </summary>

    std::string getCollateSet() const;
    bool collateSetIsSet() const;
    void unsetcollateSet();
    void setCollateSet(const std::string& value);

    /// <summary>
    /// 数据库大小（单位：字节）。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 数据库备注
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string characterSet_;
    bool characterSetIsSet_;
    std::string collateSet_;
    bool collateSetIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string comment_;
    bool commentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlListDatabase_H_
