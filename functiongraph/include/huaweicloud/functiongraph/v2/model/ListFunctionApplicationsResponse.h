
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionApplicationsResponse_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionApplicationsResponse_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/functiongraph/v2/model/ListFunctionApplicationResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionApplicationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFunctionApplicationsResponse();
    virtual ~ListFunctionApplicationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionApplicationsResponse members

    /// <summary>
    /// 函数应用列表
    /// </summary>

    std::vector<ListFunctionApplicationResult>& getApplications();
    bool applicationsIsSet() const;
    void unsetapplications();
    void setApplications(const std::vector<ListFunctionApplicationResult>& value);

    /// <summary>
    /// 下次读取位置
    /// </summary>

    int64_t getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(int64_t value);

    /// <summary>
    /// 应用程序总数
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    std::vector<ListFunctionApplicationResult> applications_;
    bool applicationsIsSet_;
    int64_t nextMarker_;
    bool nextMarkerIsSet_;
    int64_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionApplicationsResponse_H_
