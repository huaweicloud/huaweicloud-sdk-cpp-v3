
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionsRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionsRequest_H_


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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListFunctionsRequest
    : public ModelBase
{
public:
    ListFunctionsRequest();
    virtual ~ListFunctionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFunctionsRequest members

    /// <summary>
    /// 上一次查询到的最后的记录位置。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 每次查询获取的最大函数记录数量 最大值：400 如果不提供该值或者提供的值大于400或等于0，则使用默认值：400 如果该值小于0，则返回参数错误。
    /// </summary>

    std::string getMaxitems() const;
    bool maxitemsIsSet() const;
    void unsetmaxitems();
    void setMaxitems(const std::string& value);

    /// <summary>
    /// 自定义分组名称。
    /// </summary>

    std::string getPackageName() const;
    bool packageNameIsSet() const;
    void unsetpackageName();
    void setPackageName(const std::string& value);

    /// <summary>
    /// 函数名称。支持模糊查询
    /// </summary>

    std::string getFuncName() const;
    bool funcNameIsSet() const;
    void unsetfuncName();
    void setFuncName(const std::string& value);

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
    std::string packageName_;
    bool packageNameIsSet_;
    std::string funcName_;
    bool funcNameIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFunctionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListFunctionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListFunctionsRequest_H_
