
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_TargetRootDb_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_TargetRootDb_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 数据库对象迁移或同步目标库信息，两层到三层数据库时需要指定。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  TargetRootDb
    : public ModelBase
{
public:
    TargetRootDb();
    virtual ~TargetRootDb();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TargetRootDb members

    /// <summary>
    /// 库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 默认编码格式是utf8。
    /// </summary>

    std::string getDbEncoding() const;
    bool dbEncodingIsSet() const;
    void unsetdbEncoding();
    void setDbEncoding(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string dbEncoding_;
    bool dbEncodingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_TargetRootDb_H_
