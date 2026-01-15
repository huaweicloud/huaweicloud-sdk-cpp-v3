
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库对象信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DatabaseObjectInfo
    : public ModelBase
{
public:
    DatabaseObjectInfo();
    virtual ~DatabaseObjectInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseObjectInfo members

    /// <summary>
    /// type为database时，为库名；type为table或者view时，字段值参考示例
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// type为table或view时需要填写，为库名
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 类型。 table：表名，function：函数，database：SCHEMA，procedure：存储过程
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 数据库对象名称，库名、表名、视图名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 别名，映射的新名称
    /// </summary>

    std::string getAliasName() const;
    bool aliasNameIsSet() const;
    void unsetaliasName();
    void setAliasName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string aliasName_;
    bool aliasNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseObjectInfo_H_
