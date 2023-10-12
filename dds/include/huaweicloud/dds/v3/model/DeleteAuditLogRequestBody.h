
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteAuditLogRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteAuditLogRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteAuditLogRequestBody
    : public ModelBase
{
public:
    DeleteAuditLogRequestBody();
    virtual ~DeleteAuditLogRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAuditLogRequestBody members

    /// <summary>
    /// 文件名列表
    /// </summary>

    std::vector<std::string>& getFileNames();
    bool fileNamesIsSet() const;
    void unsetfileNames();
    void setFileNames(const std::vector<std::string>& value);


protected:
    std::vector<std::string> fileNames_;
    bool fileNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteAuditLogRequestBody_H_
