
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AddAgentPathResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AddAgentPathResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  AddAgentPathResponse
    : public ModelBase, public HttpResponse
{
public:
    AddAgentPathResponse();
    virtual ~AddAgentPathResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddAgentPathResponse members

    /// <summary>
    /// 新添加成功的路径列表
    /// </summary>

    std::vector<std::string>& getAdded();
    bool addedIsSet() const;
    void unsetadded();
    void setAdded(const std::vector<std::string>& value);

    /// <summary>
    /// 已经存在的路径列表
    /// </summary>

    std::vector<std::string>& getExisted();
    bool existedIsSet() const;
    void unsetexisted();
    void setExisted(const std::vector<std::string>& value);


protected:
    std::vector<std::string> added_;
    bool addedIsSet_;
    std::vector<std::string> existed_;
    bool existedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AddAgentPathResponse_H_
