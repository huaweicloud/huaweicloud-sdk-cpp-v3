
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterObjectInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterObjectInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据过滤对象信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataFilterObjectInfo
    : public ModelBase
{
public:
    DataFilterObjectInfo();
    virtual ~DataFilterObjectInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataFilterObjectInfo members

    /// <summary>
    /// 数据过滤对象的唯一标识。用于标识待过滤的数据库对象，填写格式为层级路径形式。 约束：填写格式为以下三种之一：库名-*-*-表名、schema名-*-*-表名、库名-*-*-schema名-*-*-表名。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据过滤对象的父级对象标识。用于标识当前过滤对象所属的上级数据库对象（库或Schema）。 约束：填写格式为以下三种之一：库名、schema名、库名-*-*-schema名。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 数据过滤对象的名称。即当前需要进行过滤操作的具体数据库表名。
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// 数据过滤对象映射名称
    /// </summary>

    std::string getObjectAliasName() const;
    bool objectAliasNameIsSet() const;
    void unsetobjectAliasName();
    void setObjectAliasName(const std::string& value);

    /// <summary>
    /// 数据过滤对象的类型。标识当前过滤对象的数据库对象类型，如表、视图、存储过程等。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    std::string objectAliasName_;
    bool objectAliasNameIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterObjectInfo_H_
