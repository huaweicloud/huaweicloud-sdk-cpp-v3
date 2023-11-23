
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_LtsLogType_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_LtsLogType_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_DDS_V3_EXPORT  LtsLogType
: public ModelBase
{
public:
    LtsLogType();
    virtual ~LtsLogType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eLtsLogType 
    {
        LtsLogType_audit_log,
    };

    eLtsLogType getValue() const;
    void setValue(eLtsLogType const value);

protected:
    eLtsLogType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_LtsLogType_H_
