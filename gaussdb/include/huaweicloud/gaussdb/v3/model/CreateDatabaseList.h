
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDatabaseList_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDatabaseList_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库名称列表，即创建数据库用户时同步将列表中的数据库授权给用户，列表最大长度为50。列表可以为空，在需要给该用户授权某数据库时，调用数据库用户授权接口即可。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateDatabaseList
    : public ModelBase
{
public:
    CreateDatabaseList();
    virtual ~CreateDatabaseList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatabaseList members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否为只读权限： - true，表示只读。 - false，表示可读写。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDatabaseList_H_
