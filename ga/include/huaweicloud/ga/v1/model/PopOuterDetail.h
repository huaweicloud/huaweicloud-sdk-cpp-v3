
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_PopOuterDetail_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_PopOuterDetail_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 接入点详情。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  PopOuterDetail
    : public ModelBase
{
public:
    PopOuterDetail();
    virtual ~PopOuterDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PopOuterDetail members

    /// <summary>
    /// 接入点ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_PopOuterDetail_H_
