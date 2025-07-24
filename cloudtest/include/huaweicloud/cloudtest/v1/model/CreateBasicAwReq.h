
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateBasicAwReq_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateBasicAwReq_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AwVariable.h>
#include <huaweicloud/cloudtest/v1/model/AwParam.h>
#include <huaweicloud/cloudtest/v1/model/ExtraInfo.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/CheckPoint.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateBasicAwReq
    : public ModelBase
{
public:
    CreateBasicAwReq();
    virtual ~CreateBasicAwReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBasicAwReq members

    /// <summary>
    /// body请求体的类型：text(包含JSON，参数内部区分)、form
    /// </summary>

    std::string getBodyParamType() const;
    bool bodyParamTypeIsSet() const;
    void unsetbodyParamType();
    void setBodyParamType(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 默认检查点List
    /// </summary>

    std::vector<CheckPoint>& getDftCheckPointList();
    bool dftCheckPointListIsSet() const;
    void unsetdftCheckPointList();
    void setDftCheckPointList(const std::vector<CheckPoint>& value);

    /// <summary>
    /// 默认请求头参数对象
    /// </summary>

    std::vector<AwParam>& getDftCustomHeader();
    bool dftCustomHeaderIsSet() const;
    void unsetdftCustomHeader();
    void setDftCustomHeader(const std::vector<AwParam>& value);

    /// <summary>
    /// 定义的变量信息
    /// </summary>

    std::vector<AwVariable>& getDftVariableList();
    bool dftVariableListIsSet() const;
    void unsetdftVariableList();
    void setDftVariableList(const std::vector<AwVariable>& value);

    /// <summary>
    /// 
    /// </summary>

    ExtraInfo getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const ExtraInfo& value);

    /// <summary>
    /// 组名
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数类型和参数默认值对应List
    /// </summary>

    std::vector<AwParam>& getParamTypeAndDftValue();
    bool paramTypeAndDftValueIsSet() const;
    void unsetparamTypeAndDftValue();
    void setParamTypeAndDftValue(const std::vector<AwParam>& value);


protected:
    std::string bodyParamType_;
    bool bodyParamTypeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<CheckPoint> dftCheckPointList_;
    bool dftCheckPointListIsSet_;
    std::vector<AwParam> dftCustomHeader_;
    bool dftCustomHeaderIsSet_;
    std::vector<AwVariable> dftVariableList_;
    bool dftVariableListIsSet_;
    ExtraInfo extraInfo_;
    bool extraInfoIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<AwParam> paramTypeAndDftValue_;
    bool paramTypeAndDftValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateBasicAwReq_H_
