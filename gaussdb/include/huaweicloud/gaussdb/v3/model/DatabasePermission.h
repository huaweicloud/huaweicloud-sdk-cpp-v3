
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DatabasePermission_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DatabasePermission_H_


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
/// 数据库权限列表，列表最大长度为50。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DatabasePermission
    : public ModelBase
{
public:
    DatabasePermission();
    virtual ~DatabasePermission();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabasePermission members

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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DatabasePermission_H_
