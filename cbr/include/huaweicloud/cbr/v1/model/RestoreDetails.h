
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_RestoreDetails_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_RestoreDetails_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  RestoreDetails
    : public ModelBase
{
public:
    RestoreDetails();
    virtual ~RestoreDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreDetails members

    /// <summary>
    /// 目的路径
    /// </summary>

    std::string getDestinationPath() const;
    bool destinationPathIsSet() const;
    void unsetdestinationPath();
    void setDestinationPath(const std::string& value);


protected:
    std::string destinationPath_;
    bool destinationPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_RestoreDetails_H_
