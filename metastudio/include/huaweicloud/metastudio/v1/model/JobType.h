
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_JobType_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_JobType_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  JobType
: public ModelBase
{
public:
    JobType();
    virtual ~JobType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eJobType 
    {
        JobType_BASIC,
        JobType_MIDDLE,
        JobType_ADVANCE,
        JobType_THIRD_PARTY,
        JobType_THIRD_PARTY_LJZN,
        JobType_FLEXUS,
    };

    eJobType getValue() const;
    void setValue(eJobType const value);

protected:
    eJobType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_JobType_H_
