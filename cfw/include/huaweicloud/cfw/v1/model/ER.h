
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ER_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ER_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ER
    : public ModelBase
{
public:
    ER();
    virtual ~ER();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ER members

    /// <summary>
    /// ER ID
    /// </summary>

    std::string getErId() const;
    bool erIdIsSet() const;
    void unseterId();
    void setErId(const std::string& value);

    /// <summary>
    /// ER连接ID
    /// </summary>

    std::string getErAttachId() const;
    bool erAttachIdIsSet() const;
    void unseterAttachId();
    void setErAttachId(const std::string& value);


protected:
    std::string erId_;
    bool erIdIsSet_;
    std::string erAttachId_;
    bool erAttachIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ER_H_
