
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBackupSelectionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBackupSelectionResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteBackupSelectionResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteBackupSelectionResponse();
    virtual ~DeleteBackupSelectionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBackupSelectionResponse members

    /// <summary>
    /// 响应结果
    /// </summary>

    std::string getResp() const;
    bool respIsSet() const;
    void unsetresp();
    void setResp(const std::string& value);


protected:
    std::string resp_;
    bool respIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteBackupSelectionResponse_H_
