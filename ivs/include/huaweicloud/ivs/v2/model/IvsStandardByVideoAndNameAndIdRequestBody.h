
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByVideoAndNameAndIdRequestBody_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByVideoAndNameAndIdRequestBody_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsStandardByVideoAndNameAndIdRequestBody_data.h>
#include <huaweicloud/ivs/v2/model/Meta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  IvsStandardByVideoAndNameAndIdRequestBody
    : public ModelBase
{
public:
    IvsStandardByVideoAndNameAndIdRequestBody();
    virtual ~IvsStandardByVideoAndNameAndIdRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IvsStandardByVideoAndNameAndIdRequestBody members

    /// <summary>
    /// 
    /// </summary>

    Meta getMeta() const;
    bool metaIsSet() const;
    void unsetmeta();
    void setMeta(const Meta& value);

    /// <summary>
    /// 
    /// </summary>

    IvsStandardByVideoAndNameAndIdRequestBody_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const IvsStandardByVideoAndNameAndIdRequestBody_data& value);


protected:
    Meta meta_;
    bool metaIsSet_;
    IvsStandardByVideoAndNameAndIdRequestBody_data data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByVideoAndNameAndIdRequestBody_H_
