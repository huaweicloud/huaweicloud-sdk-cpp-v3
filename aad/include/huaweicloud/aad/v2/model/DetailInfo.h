
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_DetailInfo_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_DetailInfo_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/PageRespInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  DetailInfo
    : public ModelBase
{
public:
    DetailInfo();
    virtual ~DetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetailInfo members

    /// <summary>
    /// 
    /// </summary>

    PageRespInfo getResponse() const;
    bool responseIsSet() const;
    void unsetresponse();
    void setResponse(const PageRespInfo& value);


protected:
    PageRespInfo response_;
    bool responseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_DetailInfo_H_
