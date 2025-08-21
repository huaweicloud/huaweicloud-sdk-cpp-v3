
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRequestBody_query_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRequestBody_query_H_


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
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListCesInstanceRequestBody_query
    : public ModelBase
{
public:
    ListCesInstanceRequestBody_query();
    virtual ~ListCesInstanceRequestBody_query();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCesInstanceRequestBody_query members

    /// <summary>
    /// 维度名称
    /// </summary>

    std::string getDimName() const;
    bool dimNameIsSet() const;
    void unsetdimName();
    void setDimName(const std::string& value);

    /// <summary>
    /// 维度id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string dimName_;
    bool dimNameIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListCesInstanceRequestBody_query_H_
