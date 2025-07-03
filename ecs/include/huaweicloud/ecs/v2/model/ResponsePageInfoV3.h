
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ResponsePageInfoV3_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ResponsePageInfoV3_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ResponsePageInfoV3
    : public ModelBase
{
public:
    ResponsePageInfoV3();
    virtual ~ResponsePageInfoV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResponsePageInfoV3 members

    /// <summary>
    /// 
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getPreviousMarker() const;
    bool previousMarkerIsSet() const;
    void unsetpreviousMarker();
    void setPreviousMarker(const std::string& value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;
    std::string previousMarker_;
    bool previousMarkerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ResponsePageInfoV3_H_
