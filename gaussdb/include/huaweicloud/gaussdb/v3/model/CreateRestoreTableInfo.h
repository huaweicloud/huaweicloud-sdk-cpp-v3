
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreTableInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreTableInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateRestoreTableInfo
    : public ModelBase
{
public:
    CreateRestoreTableInfo();
    virtual ~CreateRestoreTableInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRestoreTableInfo members

    /// <summary>
    /// 恢复前表名。
    /// </summary>

    std::string getOldName() const;
    bool oldNameIsSet() const;
    void unsetoldName();
    void setOldName(const std::string& value);

    /// <summary>
    /// 恢复后表名。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateRestoreTableInfo_H_
