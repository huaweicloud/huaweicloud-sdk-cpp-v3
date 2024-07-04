
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrFlavorResizeReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrFlavorResizeReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SrFlavorResizeReq
    : public ModelBase
{
public:
    SrFlavorResizeReq();
    virtual ~SrFlavorResizeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SrFlavorResizeReq members

    /// <summary>
    /// FE节点CPU、内存规格ID。填空或者不填视为规格ID与原规格ID保持一致。
    /// </summary>

    std::string getFeFlavorId() const;
    bool feFlavorIdIsSet() const;
    void unsetfeFlavorId();
    void setFeFlavorId(const std::string& value);

    /// <summary>
    /// BE节点CPU、内存规格ID。填空或者不填视为规格ID与原规格ID保持一致。
    /// </summary>

    std::string getBeFlavorId() const;
    bool beFlavorIdIsSet() const;
    void unsetbeFlavorId();
    void setBeFlavorId(const std::string& value);


protected:
    std::string feFlavorId_;
    bool feFlavorIdIsSet_;
    std::string beFlavorId_;
    bool beFlavorIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SrFlavorResizeReq_H_
