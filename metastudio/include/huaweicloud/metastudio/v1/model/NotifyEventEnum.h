
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_NotifyEventEnum_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_NotifyEventEnum_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  NotifyEventEnum
: public ModelBase
{
public:
    NotifyEventEnum();
    virtual ~NotifyEventEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eNotifyEventEnum 
    {
        NotifyEventEnum_AUTO_EXIT,
    };

    eNotifyEventEnum getValue() const;
    void setValue(eNotifyEventEnum const value);

protected:
    eNotifyEventEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_NotifyEventEnum_H_
