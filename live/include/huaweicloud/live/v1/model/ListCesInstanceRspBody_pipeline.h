
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRspBody_pipeline_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRspBody_pipeline_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 通道
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesInstanceRspBody_pipeline
    : public ModelBase
{
public:
    ListCesInstanceRspBody_pipeline();
    virtual ~ListCesInstanceRspBody_pipeline();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesInstanceRspBody_pipeline members

    /// <summary>
    /// pipeline id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// pipeline name
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRspBody_pipeline_H_
