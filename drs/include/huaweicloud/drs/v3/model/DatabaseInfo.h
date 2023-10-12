
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseInfo_H_


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
/// 数据库对象选择信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DatabaseInfo
    : public ModelBase
{
public:
    DatabaseInfo();
    virtual ~DatabaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseInfo members

    /// <summary>
    /// object_type为database时，为库名；object_type为table或者view时，字段值参考示例。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// object_type为table或view时需要填写，为库名
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 数据库对象名称，库名、表名、视图名
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// 别名，映射的新名称。
    /// </summary>

    std::string getObjectAliasName() const;
    bool objectAliasNameIsSet() const;
    void unsetobjectAliasName();
    void setObjectAliasName(const std::string& value);

    /// <summary>
    /// 是否选中，值为true会进行迁移，false该数据库对象不会迁移，partial为迁移库下面的部分表，不填默认为false
    /// </summary>

    std::string getSelect() const;
    bool selectIsSet() const;
    void unsetselect();
    void setSelect(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    std::string objectAliasName_;
    bool objectAliasNameIsSet_;
    std::string select_;
    bool selectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DatabaseInfo_H_
