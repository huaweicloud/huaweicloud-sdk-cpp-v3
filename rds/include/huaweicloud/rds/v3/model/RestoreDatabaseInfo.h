
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabaseInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabaseInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 库级恢复数据库信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreDatabaseInfo
    : public ModelBase
{
public:
    RestoreDatabaseInfo();
    virtual ~RestoreDatabaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreDatabaseInfo members

    /// <summary>
    /// 恢复前库名
    /// </summary>

    std::string getOldName() const;
    bool oldNameIsSet() const;
    void unsetoldName();
    void setOldName(const std::string& value);

    /// <summary>
    /// 恢复后库名
    /// </summary>

    std::string getNewName() const;
    bool newNameIsSet() const;
    void unsetnewName();
    void setNewName(const std::string& value);


protected:
    std::string oldName_;
    bool oldNameIsSet_;
    std::string newName_;
    bool newNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabaseInfo_H_
