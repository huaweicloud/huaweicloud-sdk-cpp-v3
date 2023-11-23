
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_StopBackupRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_StopBackupRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 停止备份。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  StopBackupRequestBody
    : public ModelBase
{
public:
    StopBackupRequestBody();
    virtual ~StopBackupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopBackupRequestBody members

    /// <summary>
    /// 操作。stop代表停止。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_StopBackupRequestBody_H_
