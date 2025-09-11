
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListDependenciesRequest_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListDependenciesRequest_H_


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
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  ListDependenciesRequest
    : public ModelBase
{
public:
    ListDependenciesRequest();
    virtual ~ListDependenciesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDependenciesRequest members

    /// <summary>
    /// 上一次查询依赖包的最后记录位置，默认为\&quot;0\&quot;。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 单次查询最大条数
    /// </summary>

    std::string getMaxitems() const;
    bool maxitemsIsSet() const;
    void unsetmaxitems();
    void setMaxitems(const std::string& value);

    /// <summary>
    /// 是否为公共依赖包
    /// </summary>

    std::string getIspublic() const;
    bool ispublicIsSet() const;
    void unsetispublic();
    void setIspublic(const std::string& value);

    /// <summary>
    /// 依赖包类型public：公开,private:私有，all：全部。缺省时查询全量
    /// </summary>

    std::string getDependencyType() const;
    bool dependencyTypeIsSet() const;
    void unsetdependencyType();
    void setDependencyType(const std::string& value);

    /// <summary>
    /// FunctionGraph函数的执行环境 Python2.7: Python语言2.7版本。 Python3.6: Pyton语言3.6版本。 Python3.9: Python语言3.9版本。 Go1.8: Go语言1.8版本。 Go1.x: Go语言1.x版本。 Java8: Java语言8版本。 Java11: Java语言11版本。 Node.js6.10: Nodejs语言6.10版本。 Node.js8.10: Nodejs语言8.10版本。 Node.js10.16: Nodejs语言10.16版本。 Node.js12.13: Nodejs语言12.13版本。 Node.js14.18: Nodejs语言14.18版本。 C#(.NET Core 2.0): C#语言2.0版本。 C#(.NET Core 2.1): C#语言2.1版本。 C#(.NET Core 3.1): C#语言3.1版本。 Custom: 自定义运行时。 PHP7.3: Php语言7.3版本。 http: HTTP函数。
    /// </summary>

    std::string getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const std::string& value);

    /// <summary>
    /// 依赖包名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 本次查询可获取的依赖包的最大数目，默认为\&quot;400\&quot;。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

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
    std::string dependencyType_;
    bool dependencyTypeIsSet_;
    std::string runtime_;
    bool runtimeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDependenciesRequest& dereference_from_shared_ptr(std::shared_ptr<ListDependenciesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_ListDependenciesRequest_H_
