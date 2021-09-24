
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByNameAndIdRequestBody_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByNameAndIdRequestBody_H_

#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/IvsStandardByNameAndIdRequestBody_data.h>
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
class HUAWEICLOUD_IVS_V2_EXPORT  IvsStandardByNameAndIdRequestBody
    : public ModelBase
{
public:
    IvsStandardByNameAndIdRequestBody();
    virtual ~IvsStandardByNameAndIdRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// IvsStandardByNameAndIdRequestBody members

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

    IvsStandardByNameAndIdRequestBody_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const IvsStandardByNameAndIdRequestBody_data& value);


protected:
    Meta meta_;
    bool metaIsSet_;
    IvsStandardByNameAndIdRequestBody_data data_;
    bool dataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByNameAndIdRequestBody_H_
