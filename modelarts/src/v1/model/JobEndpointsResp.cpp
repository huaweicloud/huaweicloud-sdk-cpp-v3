

#include "huaweicloud/modelarts/v1/model/JobEndpointsResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobEndpointsResp::JobEndpointsResp()
{
    sshIsSet_ = false;
    jupyterLabIsSet_ = false;
    tensorboardIsSet_ = false;
    mindstudioInsightIsSet_ = false;
}

JobEndpointsResp::~JobEndpointsResp() = default;

void JobEndpointsResp::validate()
{
}

web::json::value JobEndpointsResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sshIsSet_) {
        val[utility::conversions::to_string_t("ssh")] = ModelBase::toJson(ssh_);
    }
    if(jupyterLabIsSet_) {
        val[utility::conversions::to_string_t("jupyter_lab")] = ModelBase::toJson(jupyterLab_);
    }
    if(tensorboardIsSet_) {
        val[utility::conversions::to_string_t("tensorboard")] = ModelBase::toJson(tensorboard_);
    }
    if(mindstudioInsightIsSet_) {
        val[utility::conversions::to_string_t("mindstudio_insight")] = ModelBase::toJson(mindstudioInsight_);
    }

    return val;
}
bool JobEndpointsResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ssh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssh"));
        if(!fieldValue.is_null())
        {
            SSHResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSsh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jupyter_lab"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jupyter_lab"));
        if(!fieldValue.is_null())
        {
            JupyterLab refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJupyterLab(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tensorboard"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tensorboard"));
        if(!fieldValue.is_null())
        {
            Tensorboard refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTensorboard(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mindstudio_insight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindstudio_insight"));
        if(!fieldValue.is_null())
        {
            MindStudioInsight refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindstudioInsight(refVal);
        }
    }
    return ok;
}


SSHResp JobEndpointsResp::getSsh() const
{
    return ssh_;
}

void JobEndpointsResp::setSsh(const SSHResp& value)
{
    ssh_ = value;
    sshIsSet_ = true;
}

bool JobEndpointsResp::sshIsSet() const
{
    return sshIsSet_;
}

void JobEndpointsResp::unsetssh()
{
    sshIsSet_ = false;
}

JupyterLab JobEndpointsResp::getJupyterLab() const
{
    return jupyterLab_;
}

void JobEndpointsResp::setJupyterLab(const JupyterLab& value)
{
    jupyterLab_ = value;
    jupyterLabIsSet_ = true;
}

bool JobEndpointsResp::jupyterLabIsSet() const
{
    return jupyterLabIsSet_;
}

void JobEndpointsResp::unsetjupyterLab()
{
    jupyterLabIsSet_ = false;
}

Tensorboard JobEndpointsResp::getTensorboard() const
{
    return tensorboard_;
}

void JobEndpointsResp::setTensorboard(const Tensorboard& value)
{
    tensorboard_ = value;
    tensorboardIsSet_ = true;
}

bool JobEndpointsResp::tensorboardIsSet() const
{
    return tensorboardIsSet_;
}

void JobEndpointsResp::unsettensorboard()
{
    tensorboardIsSet_ = false;
}

MindStudioInsight JobEndpointsResp::getMindstudioInsight() const
{
    return mindstudioInsight_;
}

void JobEndpointsResp::setMindstudioInsight(const MindStudioInsight& value)
{
    mindstudioInsight_ = value;
    mindstudioInsightIsSet_ = true;
}

bool JobEndpointsResp::mindstudioInsightIsSet() const
{
    return mindstudioInsightIsSet_;
}

void JobEndpointsResp::unsetmindstudioInsight()
{
    mindstudioInsightIsSet_ = false;
}

}
}
}
}
}


