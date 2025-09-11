
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTemplateRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTemplateRequest_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionTemplateRequest
    : public ModelBase
{
public:
    ListFunctionTemplateRequest();
    virtual ~ListFunctionTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionTemplateRequest members

    /// <summary>
    /// 本次查询起始位置，默认值0
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 每次查询获取的最大模板数量。
    /// </summary>

    std::string getMaxitems() const;
    bool maxitemsIsSet() const;
    void unsetmaxitems();
    void setMaxitems(const std::string& value);

    /// <summary>
    /// 是否为公开模板
    /// </summary>

    std::string getIspublic() const;
    bool ispublicIsSet() const;
    void unsetispublic();
    void setIspublic(const std::string& value);

    /// <summary>
    /// 指定运行时模板
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

    /// <summary>
    /// 指定场景模板
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 指定云服务模板
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);

    /// <summary>
    /// 消息体的类型（格式）
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    std::string marker_;
    bool markerIsSet_;
    std::string maxitems_;
    bool maxitemsIsSet_;
    std::string ispublic_;
    bool ispublicIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    std::string scene_;
    bool sceneIsSet_;
    std::string service_;
    bool serviceIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFunctionTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<ListFunctionTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionTemplateRequest_H_
