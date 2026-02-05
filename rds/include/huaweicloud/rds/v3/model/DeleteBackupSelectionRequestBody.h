
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBackupSelectionRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBackupSelectionRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 是否删除或保留自动备份请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteBackupSelectionRequestBody
    : public ModelBase
{
public:
    DeleteBackupSelectionRequestBody();
    virtual ~DeleteBackupSelectionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBackupSelectionRequestBody members

    /// <summary>
    /// 选择是否保留自动备份标志
    /// </summary>

    bool isSelection() const;
    bool selectionIsSet() const;
    void unsetselection();
    void setSelection(bool value);


protected:
    bool selection_;
    bool selectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBackupSelectionRequestBody_H_
