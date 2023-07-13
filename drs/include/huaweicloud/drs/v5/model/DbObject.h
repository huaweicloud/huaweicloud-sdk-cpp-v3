
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObject_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObject_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TargetRootDb.h>
#include <string>
#include <map>
#include <vector>
#include <huaweicloud/drs/v5/model/DatabaseObject.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库对象信息体。实时迁移、实时同步需要迁移或同步的库或者表，支持实时同步场景对数据库对象进行加工，即可以为数据库对象添加过滤规则、高级设置、列加工、附加列等。 数据加工相关具体约束参考：https://support.huaweicloud.com/realtimesyn-drs/drs_03_0035.html
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DbObject
    : public ModelBase
{
public:
    DbObject();
    virtual ~DbObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DbObject members

    /// <summary>
    /// 数据库对象迁移或同步范围。取值： - all：全部迁移。 - database：库级迁移或同步。 - table：表级迁移或同步。
    /// </summary>

    std::string getObjectScope() const;
    bool objectScopeIsSet() const;
    void unsetobjectScope();
    void setObjectScope(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TargetRootDb getTargetRootDb() const;
    bool targetRootDbIsSet() const;
    void unsettargetRootDb();
    void setTargetRootDb(const TargetRootDb& value);

    /// <summary>
    /// 数据库对象迁移或同步信息，object_scope为all时不填，为库级或表级时必填。
    /// </summary>

    std::map<std::string, DatabaseObject>& getObjectInfo();
    bool objectInfoIsSet() const;
    void unsetobjectInfo();
    void setObjectInfo(const std::map<std::string, DatabaseObject>& value);


protected:
    std::string objectScope_;
    bool objectScopeIsSet_;
    TargetRootDb targetRootDb_;
    bool targetRootDbIsSet_;
    std::map<std::string, DatabaseObject> objectInfo_;
    bool objectInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObject_H_
