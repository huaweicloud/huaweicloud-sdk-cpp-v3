
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_DeleteTagsOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_DeleteTagsOption_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  DeleteTagsOption
    : public ModelBase
{
public:
    DeleteTagsOption();
    virtual ~DeleteTagsOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteTagsOption members

    /// <summary>
    /// 标签键。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_DeleteTagsOption_H_
