
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CompareConfigurationResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CompareConfigurationResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DiffDetails.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CompareConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    CompareConfigurationResponse();
    virtual ~CompareConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CompareConfigurationResponse members

    /// <summary>
    /// 参数模板之间的区别集合。
    /// </summary>

    std::vector<DiffDetails>& getDifferences();
    bool differencesIsSet() const;
    void unsetdifferences();
    void setDifferences(const std::vector<DiffDetails>& value);


protected:
    std::vector<DiffDetails> differences_;
    bool differencesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CompareConfigurationResponse_H_
