
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_DefaultRootDb_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_DefaultRootDb_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 目标实例根节点库信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  DefaultRootDb
    : public ModelBase
{
public:
    DefaultRootDb();
    virtual ~DefaultRootDb();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DefaultRootDb members

    /// <summary>
    /// 库名。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 编码格式。
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_DefaultRootDb_H_
